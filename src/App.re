type roomId = string;
type action =
  | JoinRoom(roomId)
  | CreateRoom;

[@react.component]
let make = () => {
  <main className="main-container">
    <h1 className="main-title"> {React.string("Code with Me")} </h1>
    <button className="join-meeting-btn">
      {React.string("Join a meeting room")}
    </button>
    <div />
  </main>;
};
