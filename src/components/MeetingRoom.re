type attendee = {displayName: string};
[@react.component]
let make = (~members: list(attendee)) => {
  <div>
    {List.map(
       member => <div> member.displayName->React.string </div>,
       members,
     )
     |> Array.of_list
     |> ReasonReact.array}
  </div>;
};
